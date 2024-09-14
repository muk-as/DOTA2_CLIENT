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
    // Size: 0x5b8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_Type"
    #pragma pack(push, 1)
    class CDOTA_NeutralSpawner : public server::CPointEntity
    {
    public:
        bool m_bGameStarted; // 0x4b8        
        bool m_bFirstSpawn; // 0x4b9        
        [[maybe_unused]] std::uint8_t pad_0x4ba[0x6]; // 0x4ba
        server::CountdownTimer m_SpawnTimer; // 0x4c0        
        int32_t m_iNextSpawnType; // 0x4d8        
        int32_t m_iPreviousSpawnType; // 0x4dc        
        int32_t m_iTotalToSpawn; // 0x4e0        
        int32_t m_iForcedSpawnType; // 0x4e4        
        int32_t m_iNumBatchesToSpawn; // 0x4e8        
        bool m_bLimitedBatches; // 0x4ec        
        [[maybe_unused]] std::uint8_t pad_0x4ed[0x3]; // 0x4ed
        client::PlayerID_t m_iStackingCreditPlayerID; // 0x4f0        
        float m_fInternalSpawnTimerTime; // 0x4f4        
        server::CountdownTimer m_InternalSpawnTimer; // 0x4f8        
        server::CountdownTimer m_FXTimer; // 0x510        
        // m_PendingUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CDOTA_BaseNPC>> m_PendingUnits;
        char m_PendingUnits[0x18]; // 0x528        
        // m_Units has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CDOTA_BaseNPC>> m_Units;
        char m_Units[0x18]; // 0x540        
        bool m_bSeenClearedByTeam[2]; // 0x558        
        [[maybe_unused]] std::uint8_t pad_0x55a[0x6]; // 0x55a
        CUtlSymbolLarge m_szVolumeName; // 0x560        
        // m_hVolumes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hVolumes;
        char m_hVolumes[0x18]; // 0x568        
        entity2::CEntityIOOutput m_OnSpawnerExhausted; // 0x580        
        // metadata: MNetworkEnable
        int32_t m_Type; // 0x5a8        
        int32_t m_PullType; // 0x5ac        
        int32_t m_AggroType; // 0x5b0        
        [[maybe_unused]] std::uint8_t pad_0x5b4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_NeutralSpawner because it is not a standard-layout class
    static_assert(sizeof(CDOTA_NeutralSpawner) == 0x5b8);
};
