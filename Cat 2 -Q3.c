# Function to calculate gross pay, taxes and net pay
# Function to calculate gross pay, taxes and net pay
"def" calculate_pay():
    # Get user input
    hours_worked = float(input("Enter hours worked in a week: "));
    hourly_wage = float(input("Enter hourly wage: "));

    # Calculate gross pay
    if hours_worked > 40:
        overtime_hours = hours_worked - 40
        gross_pay = (40 * hourly_wage) + (overtime_hours * hourly_wage * 1.5)
    else:
        gross_pay = hours_worked * hourly_wage

    # Calculate taxes
    if gross_pay <= 600:
        taxes = gross_pay * 0.15
    else:
        taxes = (600 * 0.15) + ((gross_pay - 600) * 0.20)

    # Calculate net pay
    net_pay = gross_pay - taxes

    # Print results
    print(f"Gross Pay: ${gross_pay:.2f}");
    print(f"Taxes: ${taxes:.2f}");
    print(f"Net Pay: ${net_pay:.2f}");

# Call the function
calculate_pay() calculate_pay():
    # Get user input
    hours_worked = float(input("Enter hours worked in a week: ");
    hourly_wage = float(input("Enter hourly wage: ");

    # Calculate gross pay
    if hours_worked > 40:
        overtime_hours = hours_worked - 40
        gross_pay = (40 * hourly_wage) + (overtime_hours * hourly_wage * 1.5)
    else:
        gross_pay = hours_worked * hourly_wage

    # Calculate taxes
    if gross_pay <= 600:
        taxes = gross_pay * 0.15
    else:
        taxes = (600 * 0.15) + ((gross_pay - 600) * 0.20)

    # Calculate net pay
    net_pay = gross_pay - taxes

    # Print results
    print(f"Gross Pay: ${gross_pay:.2f}");
    print(f"Taxes: ${taxes:.2f}");
    print(f"Net Pay: ${net_pay:.2f}");

# Call the function
calculate_pay()
return 0 ;
}