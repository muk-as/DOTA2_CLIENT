#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CBasePortraitData
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // m_iModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_iModelIndex;
            char m_iModelIndex[0x_]; // 0x_            
            CUtlStringToken m_skin; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bHasSetupView; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flRotation; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CBasePortraitData, m_iModelIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::CBasePortraitData, m_skin) == 0x_);
        static_assert(offsetof(source2sdk::client::CBasePortraitData, m_bHasSetupView) == 0x_);
        static_assert(offsetof(source2sdk::client::CBasePortraitData, m_flRotation) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CBasePortraitData) == 0x_);
    };
};
