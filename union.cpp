Image unite(Image &i1, Image &i2) {
    set.clear();
    Image res;

    res.pos = 'H';

    for (int i = 0; i < i1.nrTags; ++i) {
        set.insert(i1.tags[i]);
    }
    for (int i = 0; i < i2.nrTags; ++i) {
        set.insert(i2.tags[i]);
    }

    res.nrTags = set.size();
    int k = 0;

    for (const string &s : set) {
        res.tags[k++] = s;
    }

    return res;
}
