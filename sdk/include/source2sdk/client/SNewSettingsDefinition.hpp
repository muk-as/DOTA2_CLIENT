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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
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
            source2sdk::client::NewSettingsID_t nID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_sTitle; // 0x_            
            CUtlString m_sDescription; // 0x_            
            CPanoramaImageName sIcon; // 0x_            
            CUtlString m_sCreationDate; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::ENewSettingsBadge m_eNewSettingsBadge; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::SNewSettingsDefinition, nID) == 0x_);
        static_assert(offsetof(source2sdk::client::SNewSettingsDefinition, m_sTitle) == 0x_);
        static_assert(offsetof(source2sdk::client::SNewSettingsDefinition, m_sDescription) == 0x_);
        static_assert(offsetof(source2sdk::client::SNewSettingsDefinition, sIcon) == 0x_);
        static_assert(offsetof(source2sdk::client::SNewSettingsDefinition, m_sCreationDate) == 0x_);
        static_assert(offsetof(source2sdk::client::SNewSettingsDefinition, m_eNewSettingsBadge) == 0x_);
        
        static_assert(sizeof(source2sdk::client::SNewSettingsDefinition) == 0x_);
    };
};
