#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Leshrac_Lightning_Storm : public client::CDOTA_Buff
    {
    public:
        int32_t damage; // 0x16e8        
        float radius; // 0x16ec        
        int32_t jump_count; // 0x16f0        
        float slow_duration; // 0x16f4        
        float jump_delay; // 0x16f8        
        // hInitialTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> hInitialTarget;
        char hInitialTarget[0x4]; // 0x16fc        
        float m_flDamage; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1704[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Leshrac_Lightning_Storm because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Leshrac_Lightning_Storm) == 0x1708);
};
