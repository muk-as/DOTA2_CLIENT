#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Additive.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1a38
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "int m_nVisualTeam"
        #pragma pack(push, 1)
        class C_DOTA_Unit_Miniboss : public source2sdk::client::C_DOTA_BaseNPC_Additive
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_nVisualTeam; // 0x1a00            
            uint8_t _pad1a04[0x4]; // 0x1a04
            source2sdk::entity2::GameTime_t m_flTransitionTimestamp; // 0x1a08            
            std::int32_t m_nTempViewer; // 0x1a0c            
            // m_hAttackingHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_hAttackingHeroes;
            char m_hAttackingHeroes[0x18]; // 0x1a10            
            uint8_t _pad1a28[0x8]; // 0x1a28
            source2sdk::client::ParticleIndex_t nShieldFX; // 0x1a30            
            uint8_t _pad1a34[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Unit_Miniboss because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Unit_Miniboss) == 0x1a38);
    };
};
