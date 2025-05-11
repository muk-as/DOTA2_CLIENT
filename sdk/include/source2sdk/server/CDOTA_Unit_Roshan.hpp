#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x1898
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "bool m_bGoldenRoshan"
        #pragma pack(push, 1)
        class CDOTA_Unit_Roshan : public source2sdk::server::CDOTA_BaseNPC_Additive
        {
        public:
            std::int32_t m_iKillerTeam; // 0x1860            
            std::int32_t m_iLastHealthPercent; // 0x1864            
            source2sdk::client::ParticleIndex_t m_nFXIndex; // 0x1868            
            // m_hRadiantRoshanPit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRadiantRoshanPit;
            char m_hRadiantRoshanPit[0x4]; // 0x186c            
            // m_hDireRoshanPit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hDireRoshanPit;
            char m_hDireRoshanPit[0x4]; // 0x1870            
            // m_hRiverMidpoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hRiverMidpoint;
            char m_hRiverMidpoint[0x4]; // 0x1874            
            // m_hAttackingHeroes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hAttackingHeroes;
            char m_hAttackingHeroes[0x18]; // 0x1878            
            // metadata: MNetworkEnable
            bool m_bGoldenRoshan; // 0x1890            
            uint8_t _pad1891[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Unit_Roshan because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Unit_Roshan) == 0x1898);
    };
};
