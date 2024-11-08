#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Building.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particleslib
{
    class CNewParticleEffect;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x18e8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "string_t m_szInteractAbilityName"
    #pragma pack(push, 1)
    class C_DOTA_NPC_Lantern : public client::C_DOTA_BaseNPC_Building
    {
    public:
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_szInteractAbilityName; // 0x18c8        
        particleslib::CNewParticleEffect* m_pVisionRangeFX; // 0x18d0        
        client::ParticleIndex_t m_iFxIndex; // 0x18d8        
        int32_t m_nPreviewViewer; // 0x18dc        
        int32_t m_nTeamNumberShown; // 0x18e0        
        [[maybe_unused]] std::uint8_t pad_0x18e4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_NPC_Lantern because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_NPC_Lantern) == 0x18e8);
};
