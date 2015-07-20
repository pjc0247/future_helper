#pragma once

#include <future>

class future_helper
{
public:
	template <typename T>
	class future_wrapped : public std::future<T>{
	public:
		future_wrapped(std::future<T> &&f) :
			future<T>(std::move(f)){
		}

		T operator ~(){
			return get();
		}
	};

	template <typename T>
	static future_wrapped<T> from(std::future<T> &&f){
		return future_wrapped<T>(std::move(f));
	}
};
