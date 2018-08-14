#for loop for lists
cities <- list ("NY","Paris","NJ","London","Tokio")


for(city in cities ) { 
	print (cities )
}

#Example break when number of characters is more then 6
for (city in cities) {
	if (nchar(city) == 6) {
		break
	}
	print (city)
}

# Next goes to the next iteration. 

#controling loops with idx
# we gained access to the index

for ( i in 1:length(cities)) {
	print(cities[i])
}

nyc <- list( pop = 8403, boroughs = c("Manh","Bronx","Brooklyn"),
	    capital = FALSE)

for ( i in 1:length(nyc)) {
	print(nyc[[i]])
}

#splitting the string into charachters
rquot <-"r;s internals are " # just a string 
chars <- strsplit(rquote,split="" )[[1]]

args(sd) # to learn about the function arguments
