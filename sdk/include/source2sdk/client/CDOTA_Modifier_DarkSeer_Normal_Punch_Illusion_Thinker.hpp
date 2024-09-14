#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_DarkSeer_Normal_Punch_Illusion_Thinker : public client::CDOTA_Buff
    {
    public:
        Vector m_vecIllusionSpawnPosition; // 0x16e8        
        int32_t speed; // 0x16f4        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x16f8        
        client::ParticleIndex_t m_nFXIndex; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_DarkSeer_Normal_Punch_Illusion_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_DarkSeer_Normal_Punch_Illusion_Thinker) == 0x1700);
};
