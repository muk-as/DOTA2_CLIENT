#pragma once
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5a8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Enigma_BlackHole : public server::CDOTABaseAbility
    {
    public:
        // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hThinker;
        char m_hThinker[0x4]; // 0x5a0        
        // m_hThinker2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hThinker2;
        char m_hThinker2[0x4]; // 0x5a4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Enigma_BlackHole because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Enigma_BlackHole) == 0x5a8);
};
