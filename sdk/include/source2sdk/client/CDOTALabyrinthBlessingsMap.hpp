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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
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
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_strBlessingEventAction; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyAttributeEditor "locked_int()"
            source2sdk::client::BlessingTypeID_t m_nNextBlessingTypeID; // 0x_            
            // metadata: MPropertyAttributeEditor "locked_int()"
            source2sdk::client::BlessingID_t m_nNextBlessingID; // 0x_            
            // metadata: MPropertyAttributeEditor "VDataNodePicker(//m_mapBlessingTypes/*)"
            CUtlString m_UnlockHeroBlessingType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecHeroNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecHeroNames;
            char m_vecHeroNames[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nNumStartingHeroesUnlocked; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyAttributeEditor "VDataNodePicker(//m_mapBlessingTypes/*)"
            CUtlString m_UnlockLegacyHeroBlessingType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_vecLegacyHeroNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecLegacyHeroNames;
            char m_vecLegacyHeroNames[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nNumStartingLegacyHeroesUnlocked; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MVDataPromoteField
            // m_mapBlessingTypes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlDict<source2sdk::client::BlessingType_t> m_mapBlessingTypes;
            char m_mapBlessingTypes[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MVDataPromoteField
            // m_mapBlessings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlDict<source2sdk::client::Blessing_t> m_mapBlessings;
            char m_mapBlessings[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MVDataPromoteField
            // m_vecPaths has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::BlessingPath_t> m_vecPaths;
            char m_vecPaths[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTALabyrinthBlessingsMap, m_strBlessingEventAction) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTALabyrinthBlessingsMap, m_nNextBlessingTypeID) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTALabyrinthBlessingsMap, m_nNextBlessingID) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTALabyrinthBlessingsMap, m_UnlockHeroBlessingType) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTALabyrinthBlessingsMap, m_vecHeroNames) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTALabyrinthBlessingsMap, m_nNumStartingHeroesUnlocked) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTALabyrinthBlessingsMap, m_UnlockLegacyHeroBlessingType) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTALabyrinthBlessingsMap, m_vecLegacyHeroNames) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTALabyrinthBlessingsMap, m_nNumStartingLegacyHeroesUnlocked) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTALabyrinthBlessingsMap, m_mapBlessingTypes) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTALabyrinthBlessingsMap, m_mapBlessings) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTALabyrinthBlessingsMap, m_vecPaths) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTALabyrinthBlessingsMap) == 0x_);
    };
};
