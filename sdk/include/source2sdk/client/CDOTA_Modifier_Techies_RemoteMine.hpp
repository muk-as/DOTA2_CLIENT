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
    // Size: 0x1738
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Techies_RemoteMine : public client::CDOTA_Modifier_Invisible
    {
    public:
        int32_t radius; // 0x1718        
        int32_t damage; // 0x171c        
        int32_t radius_scepter; // 0x1720        
        int32_t damage_scepter; // 0x1724        
        int32_t vision_radius; // 0x1728        
        float vision_duration; // 0x172c        
        int32_t model_scale; // 0x1730        
        bool bExploding; // 0x1734        
        [[maybe_unused]] std::uint8_t pad_0x1735[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Techies_RemoteMine because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Techies_RemoteMine) == 0x1738);
};
