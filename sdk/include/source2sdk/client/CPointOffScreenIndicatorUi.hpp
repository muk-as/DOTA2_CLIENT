#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_PointClientUIWorldPanel.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_PointClientUIWorldPanel;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xbe0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CPointOffScreenIndicatorUi : public source2sdk::client::C_PointClientUIWorldPanel
        {
        public:
            bool m_bBeenEnabled; // 0xbd0            
            bool m_bHide; // 0xbd1            
            uint8_t _pad0bd2[0x2]; // 0xbd2
            float m_flSeenTargetTime; // 0xbd4            
            source2sdk::client::C_PointClientUIWorldPanel* m_pTargetPanel; // 0xbd8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointOffScreenIndicatorUi because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPointOffScreenIndicatorUi) == 0xbe0);
    };
};
