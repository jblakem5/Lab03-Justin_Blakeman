# Lab03-Justin_Blakeman
Lab03-Justin_Blakeman

1. (value of n and sum are documented in the code... I  didn't really see a question here)

2. We can detect an overflow when dealing with long and short ints becasue once over flowed the result will become negative. Atleast in my compiler anyhow.

3. The maximum value of n before overflow in this case I found to be 65535. Meaning n = 65536 will cause overflow.

4. In this case an overflow can be detected when the result of the factorial is "inf" meaning infinite... Although this is not truly the case
	the lowest natural number value of n that causes an overflow is n = 34 using floats to store the result

5. In this case an overflow can be detected when the result of the factorial is "inf" meaning infinite... Although this is not truly the case
	the lowest natural number value of n that causes an overflow is n = 170 using doubles to store the result

6. It stands to reason that any number n * 1/n   (by the properties of simple algebra) would equal n/n which is equivalent to 1.
	--> For floats the answer is 1. Again any number times its reciprocal is 1 (except 0)
	--> For doubles the answer again is 1. Any number times its reciprocal is 1 (except 0)

7. The numeric error occurs during the final iteration of the for loop, the for loop is executed too many times and the result is that we pass our limit of < 4.4
	Because 0.2 doesn't fit exactly in a float and you accumulate floating point errors in your loop.

8. The changing of our i value in our for loop from problem 7 results in the program stopping at the correct limit, that is it does NOT iterate through the for loop until the value of i is 4.4
	instead it iterates to 4.2 then stops. This is becasue 0.2 does fit in a double and does not accumulate any of the errors that floats do.
