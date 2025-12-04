#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPointEntity.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC;
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
        class CDOTA_NPCSpawner : public source2sdk::server::CPointEntity
        {
        public:
            CUtlSymbolLarge m_szNPCScriptName; // 0x_            
            CUtlSymbolLarge m_szNPCName; // 0x_            
            CUtlSymbolLarge m_szNPCFirstWaypoint; // 0x_            
            source2sdk::server::CountdownTimer m_SpawnTimer; // 0x_            
            source2sdk::server::CountdownTimer m_IntervalTimer; // 0x_            
            std::int32_t m_iTeam; // 0x_            
            std::int32_t m_iUpgradeMelee; // 0x_            
            std::int32_t m_iUpgradeRange; // 0x_            
            std::int32_t m_iMeleeCount; // 0x_            
            std::int32_t m_iSiegeCount; // 0x_            
            std::int32_t m_iRangeCount; // 0x_            
            std::int32_t m_iWaves; // 0x_            
            bool m_bFirstWave; // 0x_            
            bool m_bShouldSpawnStrongCreep; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_Units has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC>> m_Units;
            char m_Units[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_NPCSpawner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_NPCSpawner) == 0x_);
    };
};
