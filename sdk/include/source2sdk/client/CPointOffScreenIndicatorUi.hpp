#pragma once
#include "source2sdk/client/C_PointClientUIWorldPanel.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_PointClientUIWorldPanel;
};

namespace source2sdk::client
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0xa90
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CPointOffScreenIndicatorUi : public client::C_PointClientUIWorldPanel
    {
    public:
        bool m_bBeenEnabled; // 0xa80        
        bool m_bHide; // 0xa81        
        [[maybe_unused]] std::uint8_t pad_0xa82[0x2]; // 0xa82
        float m_flSeenTargetTime; // 0xa84        
        client::C_PointClientUIWorldPanel* m_pTargetPanel; // 0xa88        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPointOffScreenIndicatorUi because it is not a standard-layout class
    static_assert(sizeof(CPointOffScreenIndicatorUi) == 0xa90);
};
