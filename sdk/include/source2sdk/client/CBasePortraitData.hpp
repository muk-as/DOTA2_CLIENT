#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xdf0
    // Has VTable
    #pragma pack(push, 1)
    class CBasePortraitData
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x410]; // 0x0
        // m_iModelIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_iModelIndex;
        char m_iModelIndex[0x8]; // 0x410        
        CUtlStringToken m_skin; // 0x418        
        [[maybe_unused]] std::uint8_t pad_0x41c[0x9ac]; // 0x41c
        bool m_bHasSetupView; // 0xdc8        
        [[maybe_unused]] std::uint8_t pad_0xdc9[0x1f]; // 0xdc9
        float m_flRotation; // 0xde8        
        [[maybe_unused]] std::uint8_t pad_0xdec[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CBasePortraitData, m_iModelIndex) == 0x410);
    static_assert(offsetof(CBasePortraitData, m_skin) == 0x418);
    static_assert(offsetof(CBasePortraitData, m_bHasSetupView) == 0xdc8);
    static_assert(offsetof(CBasePortraitData, m_flRotation) == 0xde8);
    
    static_assert(sizeof(CBasePortraitData) == 0xdf0);
};
