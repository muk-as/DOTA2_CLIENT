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
    // Size: 0x5e8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Techies_Minefield_Sign : public client::C_DOTABaseAbility
    {
    public:
        client::ParticleIndex_t m_nFXIndex; // 0x5d8        
        client::ParticleIndex_t m_nFXHammerIndex; // 0x5dc        
        int32_t aura_radius; // 0x5e0        
        // m_hSign has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hSign;
        char m_hSign[0x4]; // 0x5e4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Techies_Minefield_Sign because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Techies_Minefield_Sign) == 0x5e8);
};
