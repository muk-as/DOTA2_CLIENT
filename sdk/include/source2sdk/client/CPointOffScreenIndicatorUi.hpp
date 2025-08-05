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
        // Size: 0xc10
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CPointOffScreenIndicatorUi : public source2sdk::client::C_PointClientUIWorldPanel
        {
        public:
            bool m_bBeenEnabled; // 0xc00            
            bool m_bHide; // 0xc01            
            uint8_t _pad0c02[0x2]; // 0xc02
            float m_flSeenTargetTime; // 0xc04            
            source2sdk::client::C_PointClientUIWorldPanel* m_pTargetPanel; // 0xc08            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointOffScreenIndicatorUi because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPointOffScreenIndicatorUi) == 0xc10);
    };
};
