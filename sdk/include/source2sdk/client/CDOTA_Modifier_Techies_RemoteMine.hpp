#pragma once
#include "source2sdk/client/CDOTA_Modifier_Invisible.hpp"
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
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1718
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Techies_RemoteMine : public client::CDOTA_Modifier_Invisible
    {
    public:
        int32_t radius; // 0x16f8        
        int32_t damage; // 0x16fc        
        int32_t radius_scepter; // 0x1700        
        int32_t damage_scepter; // 0x1704        
        int32_t vision_radius; // 0x1708        
        float vision_duration; // 0x170c        
        int32_t model_scale; // 0x1710        
        bool bExploding; // 0x1714        
        [[maybe_unused]] std::uint8_t pad_0x1715[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Techies_RemoteMine because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Techies_RemoteMine) == 0x1718);
};
