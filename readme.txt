Welcome to Penelope's Pastry Delights!

To use the program, firsst compile it with "make", and run the command below to initialise it:
./ppd stock.dat coins.dat

To enable test-case mode, write the 2 filenames for inputs used in the program and where to store the outputs of the program.
The command should look similar to this:
./ppd stock.dat coins.dat <testname>.input <testname>.actual_ppd_out

There are a few pre-made test-cases to your disposal:

-1_display_item: Dsplays items in stock
-2_purchase_item: Allows a purchase of items, and displays the stock levels both before and after the purchase. (WIP)
-3_save_and_exit: Saves stock and coin counts into files
-4_add_item: Allows to add an item into the stock, and displays the stock levels both before and after the addition.
-5_remove_item: Allows to remove an item from stock, and displays the stock levels both before and after the removal.
-6_display_coins: Displays the count of coins and notes.
-7_reset_stock: Resets the count of stock and displays both the new count and the old count
-8_reset_coins: Resets the count of coins and displays both the new count and the old count

After running the test-cases, the program will save a .actual_ppd_save_coins file where you can see the remeaning counts of coins and notes left after the execution.
