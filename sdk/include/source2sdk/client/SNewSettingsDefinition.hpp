#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ENewSettingsBadge.hpp"
#include "source2sdk/client/NewSettingsID_t.hpp"

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
        // Size: 0x40
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class SNewSettingsDefinition
        {
        public:
            // metadata: MPropertyDescription "unique integer ID of this new setting"
            // metadata: MVDataUniqueMonotonicInt "_editor/next_new_setting_id"
            // metadata: MPropertyAttributeEditor "locked_int()"
            source2sdk::client::NewSettingsID_t nID; // 0x0            
            uint8_t _pad0004[0xc]; // 0x4
            CUtlString m_sTitle; // 0x10            
            CUtlString m_sDescription; // 0x18            
            CPanoramaImageName sIcon; // 0x20            
            CUtlString m_sCreationDate; // 0x30            
            uint8_t _pad0038[0x4]; // 0x38
            source2sdk::client::ENewSettingsBadge m_eNewSettingsBadge; // 0x3c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::SNewSettingsDefinition, nID) == 0x0);
        static_assert(offsetof(source2sdk::client::SNewSettingsDefinition, m_sTitle) == 0x10);
        static_assert(offsetof(source2sdk::client::SNewSettingsDefinition, m_sDescription) == 0x18);
        static_assert(offsetof(source2sdk::client::SNewSettingsDefinition, sIcon) == 0x20);
        static_assert(offsetof(source2sdk::client::SNewSettingsDefinition, m_sCreationDate) == 0x30);
        static_assert(offsetof(source2sdk::client::SNewSettingsDefinition, m_eNewSettingsBadge) == 0x3c);
        
        static_assert(sizeof(source2sdk::client::SNewSettingsDefinition) == 0x40);
    };
};
