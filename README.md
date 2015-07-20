# future_helper

```cpp
promise<int> pr;

auto f = future_helper::from(pr.get_future());

pr.set_value(1234);

// printf("%d\n", f.get());
printf("%d\n", ~f); // 1234

```
```cpp
#define yield ~

printf("%d\n", yield f);
```
