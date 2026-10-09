//= addreputation("<name>",<points>); / getreputation("<name>")
//= Episode 19 uses the "Ice Castle" name; rAthena stores Isgard reputation as ID 4 (RepPointsIsgard)
function	script	addreputation	{
	add_reputation_points 4, getarg(1);
	return;
}

function	script	getreputation	{
	return get_reputation_points(4);
}
