/* Extended JavaScript Date library
 * Copyright 2009 Jaakko-Heikki Heusala <jheusala@iki.fi>
 * $Id: $
 */

/** Get date as a string in a format YYYYMMDD */
Date.prototype.toYYYYMMDD = function() {
    return this.getFullYear() + String(this.getMonth()+1).lpad(2, "0") + String(this.getDate()).lpad(2, "0");
}

/** Get date from a string in format YYYYMMDD */
Date.fromYYYYMMDD = function(tmp) {
    return new Date( parseInt(tmp.substr(0, 4).replace(/^0+/, ""))
                                  , parseInt(tmp.substr(4, 2).replace(/^0+/, ""))-1
                                  , parseInt(tmp.substr(6, 2).replace(/^0+/, ""))
                                  );
}

/* EOF */

