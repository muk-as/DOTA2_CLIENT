#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_BaseNPC_Creature.hpp"
#include "source2sdk/server/NianDamageTaken_t.hpp"
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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Unit_Nian : public source2sdk::server::CDOTA_BaseNPC_Creature
        {
        public:
            // m_vecRecentDamage has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::NianDamageTaken_t> m_vecRecentDamage;
            char m_vecRecentDamage[0x_]; // 0x_            
            // m_hTail has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTail;
            char m_hTail[0x_]; // 0x_            
            // m_hHorn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hHorn;
            char m_hHorn[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Unit_Nian because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Unit_Nian) == 0x_);
    };
};
