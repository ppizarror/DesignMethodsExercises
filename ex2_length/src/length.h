class Length;
class InchLength;
class MeterLength;

class Length {
public:
     virtual float value() const = 0;
     virtual Length* add(Length *l) = 0;
     virtual Length* addInch(InchLength *inchLength) = 0;
     virtual Length* addMeter(MeterLength *meterLength)= 0;
     ~Length() = default;
};

class MeterLength : public Length {
private:
    float val;
public:
    explicit MeterLength(float i);
    float value() const override;
    Length* add(Length *l) override;
    Length* addInch(InchLength *inchLength) override;
    Length* addMeter(MeterLength *meterLength) override;
};

class InchLength : public Length {
private:
    float val;
public:
    explicit InchLength(float i);
    float value() const override;
    Length* add(Length *l) override;
    Length* addInch(InchLength *inchLength) override;
    Length* addMeter(MeterLength *meterLength) override;
};