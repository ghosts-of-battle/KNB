class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;

    class KNB_Notebook: ACE_ItemCore {
        scope = 2;
        scopeArsenal = 2;
        author = ECSTRING(main,author);
        displayName = CSTRING(book_displayName);
        descriptionShort = CSTRING(book_description);
        model = QPATHTOF(data\model\book.p3d);
        picture = QPATHTOF(ui\book_item.paa);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };
};
