#pragma once
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
    class CBaseEntity;
};

namespace source2sdk::server
{
    class CDOTA_BaseNPC;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5e0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "int m_Type"
    #pragma pack(push, 1)
    class CDOTA_NeutralSpawner : public server::CPointEntity
    {
    public:
        bool m_bGameStarted; // 0x4e0        
        bool m_bFirstSpawn; // 0x4e1        
        [[maybe_unused]] std::uint8_t pad_0x4e2[0x6]; // 0x4e2
        server::CountdownTimer m_SpawnTimer; // 0x4e8        
        int32_t m_iNextSpawnType; // 0x500        
        int32_t m_iPreviousSpawnType; // 0x504        
        int32_t m_iTotalToSpawn; // 0x508        
        int32_t m_iForcedSpawnType; // 0x50c        
        int32_t m_iNumBatchesToSpawn; // 0x510        
        bool m_bLimitedBatches; // 0x514        
        [[maybe_unused]] std::uint8_t pad_0x515[0x3]; // 0x515
        client::PlayerID_t m_iStackingCreditPlayerID; // 0x518        
        float m_fInternalSpawnTimerTime; // 0x51c        
        server::CountdownTimer m_InternalSpawnTimer; // 0x520        
        server::CountdownTimer m_FXTimer; // 0x538        
        // m_PendingUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CDOTA_BaseNPC>> m_PendingUnits;
        char m_PendingUnits[0x18]; // 0x550        
        // m_Units has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CDOTA_BaseNPC>> m_Units;
        char m_Units[0x18]; // 0x568        
        bool m_bSeenClearedByTeam[2]; // 0x580        
        [[maybe_unused]] std::uint8_t pad_0x582[0x6]; // 0x582
        CUtlSymbolLarge m_szVolumeName; // 0x588        
        // m_hVolumes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hVolumes;
        char m_hVolumes[0x18]; // 0x590        
        entity2::CEntityIOOutput m_OnSpawnerExhausted; // 0x5a8        
        // metadata: MNetworkEnable
        int32_t m_Type; // 0x5d0        
        int32_t m_PullType; // 0x5d4        
        int32_t m_AggroType; // 0x5d8        
        [[maybe_unused]] std::uint8_t pad_0x5dc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_NeutralSpawner because it is not a standard-layout class
    static_assert(sizeof(CDOTA_NeutralSpawner) == 0x5e0);
};
