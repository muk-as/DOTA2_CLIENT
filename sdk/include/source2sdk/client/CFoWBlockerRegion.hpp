#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/FowBlocker_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5e0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MNetworkVarNames "FowBlocker_t m_vecFowBlockers"
    // static metadata: MNetworkVarNames "float m_flMinX"
    // static metadata: MNetworkVarNames "float m_flMaxX"
    // static metadata: MNetworkVarNames "float m_flMinY"
    // static metadata: MNetworkVarNames "float m_flMaxY"
    // static metadata: MNetworkVarNames "float m_flGridSize"
    #pragma pack(push, 1)
    class CFoWBlockerRegion : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        // m_vecFowBlockers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::FowBlocker_t> m_vecFowBlockers;
        char m_vecFowBlockers[0x68]; // 0x560        
        // metadata: MNetworkEnable
        float m_flMinX; // 0x5c8        
        // metadata: MNetworkEnable
        float m_flMaxX; // 0x5cc        
        // metadata: MNetworkEnable
        float m_flMinY; // 0x5d0        
        // metadata: MNetworkEnable
        float m_flMaxY; // 0x5d4        
        // metadata: MNetworkEnable
        float m_flGridSize; // 0x5d8        
        [[maybe_unused]] std::uint8_t pad_0x5dc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFoWBlockerRegion because it is not a standard-layout class
    static_assert(sizeof(CFoWBlockerRegion) == 0x5e0);
};
