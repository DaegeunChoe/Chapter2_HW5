# Chapter2_HW5
내일배움캠프 Chapter2 과제5번 제출용 저장소


## 간단한 설명

- /Game/CH2_HW5/Level/BasicLevel.BasicLevel 레벨을 열어야 합니다. (기본으로 설정 되어 있습니다)
- SpawnActor가 구현된 부분은 HW5GameMode 입니다.
- 어떤 Actor를 Spawn해야 하는지에 대한 정보는, BP_HW5GameMode에서 지정했습니다.
  

## 예상 출력 결과

```
LogTemp: Display: HW5Actor::Move() (0.000000,0.000000) -> (0.000000,1.000000), Distance: 1.000000
LogTemp: Warning: Event!!!!
LogTemp: Display: HW5Actor::Move() (0.000000,1.000000) -> (1.000000,1.000000), Distance: 1.000000
LogTemp: Display: HW5Actor::Move() (1.000000,1.000000) -> (2.000000,1.000000), Distance: 1.000000
LogTemp: Display: HW5Actor::Move() (2.000000,1.000000) -> (2.000000,1.000000), Distance: 0.000000
LogTemp: Display: HW5Actor::Move() (2.000000,1.000000) -> (3.000000,1.000000), Distance: 1.000000
LogTemp: Display: HW5Actor::Move() (3.000000,1.000000) -> (4.000000,1.000000), Distance: 1.000000
LogTemp: Warning: Event!!!!
LogTemp: Display: HW5Actor::Move() (4.000000,1.000000) -> (4.000000,2.000000), Distance: 1.000000
LogTemp: Warning: Event!!!!
LogTemp: Display: HW5Actor::Move() (4.000000,2.000000) -> (4.000000,3.000000), Distance: 1.000000
LogTemp: Display: HW5Actor::Move() (4.000000,3.000000) -> (5.000000,4.000000), Distance: 1.414214
LogTemp: Display: HW5Actor::Move() (5.000000,4.000000) -> (5.000000,5.000000), Distance: 1.000000
LogTemp: Warning: Event!!!!
LogTemp: Display: SumDistance: 9.414214, EventCount: 4
```
