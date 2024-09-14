#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CDOTA_ScriptedSpawner__scripted_moveto_t.hpp"
#include "source2sdk/server/CPointEntity.hpp"
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
    // Size: 0x5a0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_ScriptedSpawner : public server::CPointEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4b8[0x10]; // 0x4b8
        CUtlSymbolLarge m_szNPCFirstWaypoint; // 0x4c8        
        int32_t m_nNPCType; // 0x4d0        
        bool m_bAllowRelaxation; // 0x4d4        
        bool m_bPlayPostVictoryAnims; // 0x4d5        
        bool m_bDisableAutoAttack; // 0x4d6        
        bool m_bAutomaticallyRespawn; // 0x4d7        
        bool m_bInvulnerable; // 0x4d8        
        bool m_bAllowHeroTargets; // 0x4d9        
        [[maybe_unused]] std::uint8_t pad_0x4da[0x2]; // 0x4da
        int32_t m_nActivityOverride; // 0x4dc        
        float m_flDuration; // 0x4e0        
        bool m_bAnimationFireOnce; // 0x4e4        
        [[maybe_unused]] std::uint8_t pad_0x4e5[0x3]; // 0x4e5
        // m_hMoveToTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CDOTA_ScriptedSpawner__scripted_moveto_t> m_hMoveToTargets;
        char m_hMoveToTargets[0x18]; // 0x4e8        
        entity2::CEntityIOOutput m_OnAllUnitsKilled; // 0x500        
        entity2::CEntityIOOutput m_OnUnitKilled; // 0x528        
        entity2::CEntityIOOutput m_OnHealthLow; // 0x550        
        // m_Units has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CDOTA_BaseNPC>> m_Units;
        char m_Units[0x18]; // 0x578        
        // m_hSpawnpoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hSpawnpoint;
        char m_hSpawnpoint[0x4]; // 0x590        
        [[maybe_unused]] std::uint8_t pad_0x594[0x4]; // 0x594
        CUtlSymbolLarge m_szCustomNPCName; // 0x598        
        
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
    static_assert(sizeof(CDOTA_ScriptedSpawner) == 0x5a0);
};
