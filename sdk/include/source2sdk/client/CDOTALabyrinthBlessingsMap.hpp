#pragma once
#include "source2sdk/client/BlessingID_t.hpp"
#include "source2sdk/client/BlessingPath_t.hpp"
#include "source2sdk/client/BlessingTypeID_t.hpp"
#include "source2sdk/client/BlessingType_t.hpp"
#include "source2sdk/client/Blessing_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x198
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    // static metadata: MVDataSingleton
    // static metadata: MVDataPreviewWidget
    // static metadata: MCustomFGDMetadata "{ promote_children=[ { key="_editor" mode="ARRAY_OF_MULTIPLE" class="blessing_editor_guide" promotion_mode="VDATA_PROMOTE_AS_CHILD_NODE" }, ] }"
    #pragma pack(push, 1)
    class CDOTALabyrinthBlessingsMap
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        CUtlString m_strBlessingEventAction; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x10[0x8]; // 0x10
        // metadata: MPropertyAttributeEditor "locked_int()"
        client::BlessingTypeID_t m_nNextBlessingTypeID; // 0x18        
        // metadata: MPropertyAttributeEditor "locked_int()"
        client::BlessingID_t m_nNextBlessingID; // 0x1c        
        // metadata: MPropertyAttributeEditor "VDataNodePicker(//m_mapBlessingTypes/*)"
        CUtlString m_UnlockHeroBlessingType; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x28[0x8]; // 0x28
        // m_vecHeroNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_vecHeroNames;
        char m_vecHeroNames[0x18]; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x48[0x18]; // 0x48
        int32_t m_nNumStartingHeroesUnlocked; // 0x60        
        [[maybe_unused]] std::uint8_t pad_0x64[0x4]; // 0x64
        // metadata: MPropertyAttributeEditor "VDataNodePicker(//m_mapBlessingTypes/*)"
        CUtlString m_UnlockLegacyHeroBlessingType; // 0x68        
        [[maybe_unused]] std::uint8_t pad_0x70[0x8]; // 0x70
        // m_vecLegacyHeroNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_vecLegacyHeroNames;
        char m_vecLegacyHeroNames[0x18]; // 0x78        
        [[maybe_unused]] std::uint8_t pad_0x90[0x18]; // 0x90
        int32_t m_nNumStartingLegacyHeroesUnlocked; // 0xa8        
        [[maybe_unused]] std::uint8_t pad_0xac[0x4]; // 0xac
        // metadata: MVDataPromoteField
        // m_mapBlessingTypes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlDict<client::BlessingType_t> m_mapBlessingTypes;
        char m_mapBlessingTypes[0x28]; // 0xb0        
        [[maybe_unused]] std::uint8_t pad_0xd8[0x40]; // 0xd8
        // metadata: MVDataPromoteField
        // m_mapBlessings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlDict<client::Blessing_t> m_mapBlessings;
        char m_mapBlessings[0x28]; // 0x118        
        [[maybe_unused]] std::uint8_t pad_0x140[0x28]; // 0x140
        // metadata: MVDataPromoteField
        // m_vecPaths has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::BlessingPath_t> m_vecPaths;
        char m_vecPaths[0x18]; // 0x168        
        [[maybe_unused]] std::uint8_t pad_0x180[0x18];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTALabyrinthBlessingsMap, m_strBlessingEventAction) == 0x8);
    static_assert(offsetof(CDOTALabyrinthBlessingsMap, m_nNextBlessingTypeID) == 0x18);
    static_assert(offsetof(CDOTALabyrinthBlessingsMap, m_nNextBlessingID) == 0x1c);
    static_assert(offsetof(CDOTALabyrinthBlessingsMap, m_UnlockHeroBlessingType) == 0x20);
    static_assert(offsetof(CDOTALabyrinthBlessingsMap, m_vecHeroNames) == 0x30);
    static_assert(offsetof(CDOTALabyrinthBlessingsMap, m_nNumStartingHeroesUnlocked) == 0x60);
    static_assert(offsetof(CDOTALabyrinthBlessingsMap, m_UnlockLegacyHeroBlessingType) == 0x68);
    static_assert(offsetof(CDOTALabyrinthBlessingsMap, m_vecLegacyHeroNames) == 0x78);
    static_assert(offsetof(CDOTALabyrinthBlessingsMap, m_nNumStartingLegacyHeroesUnlocked) == 0xa8);
    static_assert(offsetof(CDOTALabyrinthBlessingsMap, m_mapBlessingTypes) == 0xb0);
    static_assert(offsetof(CDOTALabyrinthBlessingsMap, m_mapBlessings) == 0x118);
    static_assert(offsetof(CDOTALabyrinthBlessingsMap, m_vecPaths) == 0x168);
    
    static_assert(sizeof(CDOTALabyrinthBlessingsMap) == 0x198);
};
