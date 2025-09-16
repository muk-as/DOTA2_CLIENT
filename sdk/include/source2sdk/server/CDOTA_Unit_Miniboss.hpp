#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Additive.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1918
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "int m_nVisualTeam"
        #pragma pack(push, 1)
        class CDOTA_Unit_Miniboss : public source2sdk::server::CDOTA_BaseNPC_Additive
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_nVisualTeam; // 0x18e0            
            uint8_t _pad18e4[0x4]; // 0x18e4
            source2sdk::entity2::GameTime_t m_flTransitionTimestamp; // 0x18e8            
            std::int32_t m_nTempViewer; // 0x18ec            
            // m_hAttackingHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hAttackingHeroes;
            char m_hAttackingHeroes[0x18]; // 0x18f0            
            uint8_t _pad1908[0x8]; // 0x1908
            source2sdk::client::ParticleIndex_t nShieldFX; // 0x1910            
            uint8_t _pad1914[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Unit_Miniboss because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Unit_Miniboss) == 0x1918);
    };
};
