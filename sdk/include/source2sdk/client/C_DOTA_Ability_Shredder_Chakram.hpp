#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x650
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_Shredder_Chakram : public client::C_DOTABaseAbility
    {
    public:
        float radius; // 0x600        
        float speed; // 0x604        
        float pass_slow_duration; // 0x608        
        int32_t pass_damage; // 0x60c        
        Vector m_vEndLocation; // 0x610        
        float m_fZCoord; // 0x61c        
        bool m_bIsReturning; // 0x620        
        [[maybe_unused]] std::uint8_t pad_0x621[0x3]; // 0x621
        client::ParticleIndex_t m_nFXIndex; // 0x624        
        client::ParticleIndex_t m_nFXIndexB; // 0x628        
        client::ParticleIndex_t m_nFXIndexC; // 0x62c        
        int32_t m_nProjectileIndex; // 0x630        
        // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hThinker;
        char m_hThinker[0x4]; // 0x634        
        // m_hReturnHits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hReturnHits;
        char m_hReturnHits[0x18]; // 0x638        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Shredder_Chakram because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Shredder_Chakram) == 0x650);
};
