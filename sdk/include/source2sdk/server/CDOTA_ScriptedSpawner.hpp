#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CDOTA_ScriptedSpawner_scripted_moveto_t.hpp"
#include "source2sdk/server/CPointEntity.hpp"
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
        #pragma pack(push, 1)
        class CDOTA_ScriptedSpawner : public source2sdk::server::CPointEntity
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_szNPCFirstWaypoint; // 0x_            
            std::int32_t m_nNPCType; // 0x_            
            bool m_bAllowRelaxation; // 0x_            
            bool m_bPlayPostVictoryAnims; // 0x_            
            bool m_bDisableAutoAttack; // 0x_            
            bool m_bAutomaticallyRespawn; // 0x_            
            bool m_bInvulnerable; // 0x_            
            bool m_bAllowHeroTargets; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nActivityOverride; // 0x_            
            float m_flDuration; // 0x_            
            bool m_bAnimationFireOnce; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_hMoveToTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CDOTA_ScriptedSpawner_scripted_moveto_t> m_hMoveToTargets;
            char m_hMoveToTargets[0x_]; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnAllUnitsKilled; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnUnitKilled; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnHealthLow; // 0x_            
            // m_Units has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC>> m_Units;
            char m_Units[0x_]; // 0x_            
            // m_hSpawnpoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSpawnpoint;
            char m_hSpawnpoint[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_szCustomNPCName; // 0x_            
            
            // Datamap fields:
            // int32_t InputSpawnNPC; // 0x_
            // int32_t InputSetNPCType; // 0x_
            // int32_t InputSetNPCTeam; // 0x_
            // CUtlSymbolLarge InputSetNPCWaypoint; // 0x_
            // void InputRemoveAllSpawnedUnits; // 0x_
            // bool InputSetAllowRelaxation; // 0x_
            // bool InputSetAllowAutoAttack; // 0x_
            // bool InputSetAutomaticallyRespawn; // 0x_
            // bool InputSetPlayPostVictoryAnimation; // 0x_
            // CUtlSymbolLarge InputFireTutorialAdvanceEvent; // 0x_
            // CUtlSymbolLarge InputSetSpawnPoint; // 0x_
            // bool InputSetCompanion; // 0x_
            // bool InputSetCompanionAttack; // 0x_
            // CUtlSymbolLarge InputTeleportToWaypoint; // 0x_
            // bool InputSetInvulnerable; // 0x_
            // int32_t InputSetHealth; // 0x_
            // bool InputForceIdle; // 0x_
            // bool InputForceCreepAttack; // 0x_
            // int32_t InputUseAbility; // 0x_
            // int32_t InputSetDuration; // 0x_
            // int32_t InputSetAllowHeroTargets; // 0x_
            // CUtlSymbolLarge InputSetCustomNPCName; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_ScriptedSpawner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_ScriptedSpawner) == 0x_);
    };
};
