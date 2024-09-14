#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Additive.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1818
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_BaseNPC_Phantom_Assassin_GroundDagger : public server::CDOTA_BaseNPC_Additive
    {
    public:
        client::ParticleIndex_t m_nFXIndex; // 0x1810        
        [[maybe_unused]] std::uint8_t pad_0x1814[0x4];
        
        // Static fields:
        static char* &Get_PARTICLE_SPAWN() {return *reinterpret_cast<char**>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CDOTA_BaseNPC_Phantom_Assassin_GroundDagger")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_BaseNPC_Phantom_Assassin_GroundDagger because it is not a standard-layout class
    static_assert(sizeof(CDOTA_BaseNPC_Phantom_Assassin_GroundDagger) == 0x1818);
};
