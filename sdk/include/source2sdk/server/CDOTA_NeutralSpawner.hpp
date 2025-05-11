#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PlayerID_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CPointEntity.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5f0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "int m_Type"
        #pragma pack(push, 1)
        class CDOTA_NeutralSpawner : public source2sdk::server::CPointEntity
        {
        public:
            bool m_bGameStarted; // 0x4d8            
            bool m_bFirstSpawn; // 0x4d9            
            uint8_t _pad04da[0x6]; // 0x4da
            source2sdk::server::CountdownTimer m_SpawnTimer; // 0x4e0            
            std::int32_t m_iNextSpawnType; // 0x4f8            
            std::int32_t m_iMinSpawnType; // 0x4fc            
            std::int32_t m_iMaxSpawnType; // 0x500            
            std::int32_t m_iSpawnSubtype; // 0x504            
            std::int32_t m_iPreviousSpawnType; // 0x508            
            std::int32_t m_iTotalToSpawn; // 0x50c            
            std::int32_t m_iForcedSpawnType; // 0x510            
            std::int32_t m_iNumBatchesToSpawn; // 0x514            
            std::int32_t m_iMaxUpgradeCount; // 0x518            
            std::int32_t m_iCurrentUpgradeCount; // 0x51c            
            std::int32_t m_iBaseType; // 0x520            
            bool m_bLimitedBatches; // 0x524            
            uint8_t _pad0525[0x3]; // 0x525
            source2sdk::client::PlayerID_t m_iStackingCreditPlayerID; // 0x528            
            float m_fInternalSpawnTimerTime; // 0x52c            
            source2sdk::server::CountdownTimer m_InternalSpawnTimer; // 0x530            
            source2sdk::server::CountdownTimer m_FXTimer; // 0x548            
            // m_PendingUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC>> m_PendingUnits;
            char m_PendingUnits[0x18]; // 0x560            
            // m_Units has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC>> m_Units;
            char m_Units[0x18]; // 0x578            
            std::int32_t m_iNextTypeUnitCount; // 0x590            
            bool m_bSeenClearedByTeam[2]; // 0x594            
            uint8_t _pad0596[0x2]; // 0x596
            CUtlSymbolLarge m_szVolumeName; // 0x598            
            // m_hVolumes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hVolumes;
            char m_hVolumes[0x18]; // 0x5a0            
            source2sdk::entity2::CEntityIOOutput m_OnSpawnerExhausted; // 0x5b8            
            // metadata: MNetworkEnable
            std::int32_t m_Type; // 0x5e0            
            std::int32_t m_PullType; // 0x5e4            
            std::int32_t m_AggroType; // 0x5e8            
            uint8_t _pad05ec[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_NeutralSpawner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_NeutralSpawner) == 0x5f0);
    };
};
