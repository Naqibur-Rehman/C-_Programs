#ifndef INSUFFICIENT_FUND_EXCEPTION_H
#define INSUFFICIENT_FUND_EXCEPTION_H


class InsufficientFundException: public std::exception
{
    public:
        InsufficientFundException() noexcept = default;
        ~InsufficientFundException() = default;
        virtual const char* what() const noexcept {
            return "Not sufficient funds to withdraw";
        }
};

#endif // INSUFFICIENT_FUND_EXCEPTION_H
