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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPointOffScreenIndicatorUi : public source2sdk::client::C_PointClientUIWorldPanel
        {
        public:
            // metadata: MNotSaved
            bool m_bBeenEnabled; // 0x_            
            // metadata: MNotSaved
            bool m_bHide; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNotSaved
            float m_flSeenTargetTime; // 0x_            
            // metadata: MNotSaved
            source2sdk::client::C_PointClientUIWorldPanel* m_pTargetPanel; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPointOffScreenIndicatorUi because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPointOffScreenIndicatorUi) == 0x_);
    };
};
