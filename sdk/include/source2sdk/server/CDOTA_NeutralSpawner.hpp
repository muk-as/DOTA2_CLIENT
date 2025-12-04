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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "int m_Type"
        #pragma pack(push, 1)
        class CDOTA_NeutralSpawner : public source2sdk::server::CPointEntity
        {
        public:
            bool m_bGameStarted; // 0x_            
            bool m_bFirstSpawn; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CountdownTimer m_SpawnTimer; // 0x_            
            std::int32_t m_iNextSpawnType; // 0x_            
            std::int32_t m_iMinSpawnType; // 0x_            
            std::int32_t m_iMaxSpawnType; // 0x_            
            std::int32_t m_iSpawnSubtype; // 0x_            
            std::int32_t m_iPreviousSpawnType; // 0x_            
            std::int32_t m_iTotalToSpawn; // 0x_            
            std::int32_t m_iForcedSpawnType; // 0x_            
            std::int32_t m_iNumBatchesToSpawn; // 0x_            
            std::int32_t m_iMaxUpgradeCount; // 0x_            
            std::int32_t m_iCurrentUpgradeCount; // 0x_            
            std::int32_t m_iBaseType; // 0x_            
            bool m_bLimitedBatches; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::PlayerID_t m_iStackingCreditPlayerID; // 0x_            
            float m_fInternalSpawnTimerTime; // 0x_            
            source2sdk::server::CountdownTimer m_InternalSpawnTimer; // 0x_            
            source2sdk::server::CountdownTimer m_FXTimer; // 0x_            
            // m_PendingUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC>> m_PendingUnits;
            char m_PendingUnits[0x_]; // 0x_            
            // m_Units has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC>> m_Units;
            char m_Units[0x_]; // 0x_            
            std::int32_t m_iNextTypeUnitCount; // 0x_            
            bool m_bSeenClearedByTeam[2]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_szVolumeName; // 0x_            
            // m_hVolumes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hVolumes;
            char m_hVolumes[0x_]; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnSpawnerExhausted; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_Type; // 0x_            
            std::int32_t m_PullType; // 0x_            
            std::int32_t m_AggroType; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_NeutralSpawner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_NeutralSpawner) == 0x_);
    };
};
