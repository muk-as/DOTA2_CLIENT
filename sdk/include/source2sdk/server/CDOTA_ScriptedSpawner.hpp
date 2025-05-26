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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5c8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_ScriptedSpawner : public source2sdk::server::CPointEntity
        {
        public:
            uint8_t _pad04e0[0x10]; // 0x4e0
            CUtlSymbolLarge m_szNPCFirstWaypoint; // 0x4f0            
            std::int32_t m_nNPCType; // 0x4f8            
            bool m_bAllowRelaxation; // 0x4fc            
            bool m_bPlayPostVictoryAnims; // 0x4fd            
            bool m_bDisableAutoAttack; // 0x4fe            
            bool m_bAutomaticallyRespawn; // 0x4ff            
            bool m_bInvulnerable; // 0x500            
            bool m_bAllowHeroTargets; // 0x501            
            uint8_t _pad0502[0x2]; // 0x502
            std::int32_t m_nActivityOverride; // 0x504            
            float m_flDuration; // 0x508            
            bool m_bAnimationFireOnce; // 0x50c            
            uint8_t _pad050d[0x3]; // 0x50d
            // m_hMoveToTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CDOTA_ScriptedSpawner_scripted_moveto_t> m_hMoveToTargets;
            char m_hMoveToTargets[0x18]; // 0x510            
            source2sdk::entity2::CEntityIOOutput m_OnAllUnitsKilled; // 0x528            
            source2sdk::entity2::CEntityIOOutput m_OnUnitKilled; // 0x550            
            source2sdk::entity2::CEntityIOOutput m_OnHealthLow; // 0x578            
            // m_Units has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CDOTA_BaseNPC>> m_Units;
            char m_Units[0x18]; // 0x5a0            
            // m_hSpawnpoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSpawnpoint;
            char m_hSpawnpoint[0x4]; // 0x5b8            
            uint8_t _pad05bc[0x4]; // 0x5bc
            CUtlSymbolLarge m_szCustomNPCName; // 0x5c0            
            
            // Datamap fields:
            // int32_t InputSpawnNPC; // 0x0
            // int32_t InputSetNPCType; // 0x0
            // int32_t InputSetNPCTeam; // 0x0
            // CUtlSymbolLarge InputSetNPCWaypoint; // 0x0
            // void InputRemoveAllSpawnedUnits; // 0x0
            // bool InputSetAllowRelaxation; // 0x0
            // bool InputSetAllowAutoAttack; // 0x0
            // bool InputSetAutomaticallyRespawn; // 0x0
            // bool InputSetPlayPostVictoryAnimation; // 0x0
            // CUtlSymbolLarge InputFireTutorialAdvanceEvent; // 0x0
            // CUtlSymbolLarge InputSetSpawnPoint; // 0x0
            // bool InputSetCompanion; // 0x0
            // bool InputSetCompanionAttack; // 0x0
            // CUtlSymbolLarge InputTeleportToWaypoint; // 0x0
            // bool InputSetInvulnerable; // 0x0
            // int32_t InputSetHealth; // 0x0
            // bool InputForceIdle; // 0x0
            // bool InputForceCreepAttack; // 0x0
            // int32_t InputUseAbility; // 0x0
            // int32_t InputSetDuration; // 0x0
            // int32_t InputSetAllowHeroTargets; // 0x0
            // CUtlSymbolLarge InputSetCustomNPCName; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_ScriptedSpawner because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_ScriptedSpawner) == 0x5c8);
    };
};
