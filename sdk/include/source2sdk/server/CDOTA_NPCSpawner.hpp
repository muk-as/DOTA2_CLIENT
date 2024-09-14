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
    // Size: 0x538
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_NPCSpawner : public server::CPointEntity
    {
    public:
        CUtlSymbolLarge m_szNPCScriptName; // 0x4b8        
        CUtlSymbolLarge m_szNPCName; // 0x4c0        
        CUtlSymbolLarge m_szNPCFirstWaypoint; // 0x4c8        
        server::CountdownTimer m_SpawnTimer; // 0x4d0        
        server::CountdownTimer m_IntervalTimer; // 0x4e8        
        int32_t m_iTeam; // 0x500        
        int32_t m_iUpgradeMelee; // 0x504        
        int32_t m_iUpgradeRange; // 0x508        
        int32_t m_iMeleeCount; // 0x50c        
        int32_t m_iSiegeCount; // 0x510        
        int32_t m_iRangeCount; // 0x514        
        int32_t m_iWaves; // 0x518        
        bool m_bFirstWave; // 0x51c        
        bool m_bShouldSpawnStrongCreep; // 0x51d        
        [[maybe_unused]] std::uint8_t pad_0x51e[0x2]; // 0x51e
        // m_Units has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CDOTA_BaseNPC>> m_Units;
        char m_Units[0x18]; // 0x520        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_NPCSpawner because it is not a standard-layout class
    static_assert(sizeof(CDOTA_NPCSpawner) == 0x538);
};
