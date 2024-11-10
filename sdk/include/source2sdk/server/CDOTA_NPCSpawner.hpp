#pragma once
#include "source2sdk/server/CPointEntity.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CDOTA_BaseNPC;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x560
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_NPCSpawner : public server::CPointEntity
    {
    public:
        CUtlSymbolLarge m_szNPCScriptName; // 0x4e0        
        CUtlSymbolLarge m_szNPCName; // 0x4e8        
        CUtlSymbolLarge m_szNPCFirstWaypoint; // 0x4f0        
        server::CountdownTimer m_SpawnTimer; // 0x4f8        
        server::CountdownTimer m_IntervalTimer; // 0x510        
        int32_t m_iTeam; // 0x528        
        int32_t m_iUpgradeMelee; // 0x52c        
        int32_t m_iUpgradeRange; // 0x530        
        int32_t m_iMeleeCount; // 0x534        
        int32_t m_iSiegeCount; // 0x538        
        int32_t m_iRangeCount; // 0x53c        
        int32_t m_iWaves; // 0x540        
        bool m_bFirstWave; // 0x544        
        bool m_bShouldSpawnStrongCreep; // 0x545        
        [[maybe_unused]] std::uint8_t pad_0x546[0x2]; // 0x546
        // m_Units has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CDOTA_BaseNPC>> m_Units;
        char m_Units[0x18]; // 0x548        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_NPCSpawner because it is not a standard-layout class
    static_assert(sizeof(CDOTA_NPCSpawner) == 0x560);
};
