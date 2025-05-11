#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/BlessingID_t.hpp"
#include "source2sdk/client/BlessingPath_t.hpp"
#include "source2sdk/client/BlessingTypeID_t.hpp"
#include "source2sdk/client/BlessingType_t.hpp"
#include "source2sdk/client/Blessing_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
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
            uint8_t _pad0000[0x8]; // 0x0
            CUtlString m_strBlessingEventAction; // 0x8            
            uint8_t _pad0010[0x8]; // 0x10
            // metadata: MPropertyAttributeEditor "locked_int()"
            source2sdk::client::BlessingTypeID_t m_nNextBlessingTypeID; // 0x18            
            // metadata: MPropertyAttributeEditor "locked_int()"
            source2sdk::client::BlessingID_t m_nNextBlessingID; // 0x1c            
            // metadata: MPropertyAttributeEditor "VDataNodePicker(//m_mapBlessingTypes/*)"
            CUtlString m_UnlockHeroBlessingType; // 0x20            
            uint8_t _pad0028[0x8]; // 0x28
            // m_vecHeroNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecHeroNames;
            char m_vecHeroNames[0x18]; // 0x30            
            uint8_t _pad0048[0x18]; // 0x48
            std::int32_t m_nNumStartingHeroesUnlocked; // 0x60            
            uint8_t _pad0064[0x4]; // 0x64
            // metadata: MPropertyAttributeEditor "VDataNodePicker(//m_mapBlessingTypes/*)"
            CUtlString m_UnlockLegacyHeroBlessingType; // 0x68            
            uint8_t _pad0070[0x8]; // 0x70
            // m_vecLegacyHeroNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecLegacyHeroNames;
            char m_vecLegacyHeroNames[0x18]; // 0x78            
            uint8_t _pad0090[0x18]; // 0x90
            std::int32_t m_nNumStartingLegacyHeroesUnlocked; // 0xa8            
            uint8_t _pad00ac[0x4]; // 0xac
            // metadata: MVDataPromoteField
            // m_mapBlessingTypes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlDict<source2sdk::client::BlessingType_t> m_mapBlessingTypes;
            char m_mapBlessingTypes[0x28]; // 0xb0            
            uint8_t _pad00d8[0x40]; // 0xd8
            // metadata: MVDataPromoteField
            // m_mapBlessings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlDict<source2sdk::client::Blessing_t> m_mapBlessings;
            char m_mapBlessings[0x28]; // 0x118            
            uint8_t _pad0140[0x28]; // 0x140
            // metadata: MVDataPromoteField
            // m_vecPaths has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::BlessingPath_t> m_vecPaths;
            char m_vecPaths[0x18]; // 0x168            
            uint8_t _pad0180[0x18];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTALabyrinthBlessingsMap, m_strBlessingEventAction) == 0x8);
        static_assert(offsetof(source2sdk::client::CDOTALabyrinthBlessingsMap, m_nNextBlessingTypeID) == 0x18);
        static_assert(offsetof(source2sdk::client::CDOTALabyrinthBlessingsMap, m_nNextBlessingID) == 0x1c);
        static_assert(offsetof(source2sdk::client::CDOTALabyrinthBlessingsMap, m_UnlockHeroBlessingType) == 0x20);
        static_assert(offsetof(source2sdk::client::CDOTALabyrinthBlessingsMap, m_vecHeroNames) == 0x30);
        static_assert(offsetof(source2sdk::client::CDOTALabyrinthBlessingsMap, m_nNumStartingHeroesUnlocked) == 0x60);
        static_assert(offsetof(source2sdk::client::CDOTALabyrinthBlessingsMap, m_UnlockLegacyHeroBlessingType) == 0x68);
        static_assert(offsetof(source2sdk::client::CDOTALabyrinthBlessingsMap, m_vecLegacyHeroNames) == 0x78);
        static_assert(offsetof(source2sdk::client::CDOTALabyrinthBlessingsMap, m_nNumStartingLegacyHeroesUnlocked) == 0xa8);
        static_assert(offsetof(source2sdk::client::CDOTALabyrinthBlessingsMap, m_mapBlessingTypes) == 0xb0);
        static_assert(offsetof(source2sdk::client::CDOTALabyrinthBlessingsMap, m_mapBlessings) == 0x118);
        static_assert(offsetof(source2sdk::client::CDOTALabyrinthBlessingsMap, m_vecPaths) == 0x168);
        
        static_assert(sizeof(source2sdk::client::CDOTALabyrinthBlessingsMap) == 0x198);
    };
};
