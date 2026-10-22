# Bitwise Operations

## Objective

To understand the different bitwise operations and verify their results using binary values.

## Description

Bitwise operations are logical operations performed on individual bits of binary numbers. Each bit is processed according to a specific logical rule.

## Types of Bitwise Operations

| Operation | Symbol | Description |
|---|---|---|
| AND | `&` | Output is 1 when both bits are 1. |
| OR | `\|` | Output is 1 when at least one bit is 1. |
| XOR | `^` | Output is 1 when the bits are different. |
| NOT | `~` | Inverts each bit: 0 becomes 1 and 1 becomes 0. |
| Left Shift | `<<` | Shifts the bits towards the left. |
| Right Shift | `>>` | Shifts the bits towards the right. |

## Truth Tables

### 1. AND Operation

| A | B | Y |
|---|---|---|
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

### 2. OR Operation

| A | B | Y |
|---|---|---|
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 1 |

### 3. XOR Operation

| A | B | Y |
|---|---|---|
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 0 |

### 4. NOT Operation

| A | Y |
|---|---|
| 0 | 1 |
| 1 | 0 |

## Example

Consider two binary numbers:

- A = `1100` (12)
- B = `1010` (10)

| Operation | Binary Result | Decimal Result |
|---|---|---:|
| AND | `1000` | 8 |
| OR | `1110` | 14 |
| XOR | `0110` | 6 |

### Shift Operations

- **Left shift:** `1100` → `11000` (24)
- **Right shift:** `1100` → `0110` (6)

These examples illustrate shifts of one bit for the given positive binary value.

## Applications

1. Bit manipulation in digital systems.
2. Setting and clearing individual bits.
3. Register configuration in embedded systems.
4. Data masking and extraction.
5. Low-level hardware control.
6. Efficient binary data processing.

## Observation

- AND produces 1 only when both bits are 1.
- OR produces 1 when at least one bit is 1.
- XOR produces 1 when the bits are different.
- NOT reverses each bit.
- Shift operations move bits left or right.

## Conclusion

The different bitwise operations were studied using binary values. Their truth tables and examples demonstrate how individual bits are manipulated in digital systems.
