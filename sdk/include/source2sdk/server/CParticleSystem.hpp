#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd00
    // Has VTable
    // Construct allowed
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkIncludeByUserGroup "Origin"
    // static metadata: MNetworkIncludeByName "CGameSceneNode::m_angRotation"
    // static metadata: MNetworkIncludeByName "m_hOwnerEntity"
    // static metadata: MNetworkIncludeByName "CGameSceneNode::m_hParent"
    // static metadata: MNetworkIncludeByName "CGameSceneNode::m_hierarchyAttachName"
    // static metadata: MNetworkIncludeByName "m_nameStringableIndex"
    // static metadata: MEntityAllowsPortraitWorldSpawn
    // static metadata: MNetworkVarNames "char m_szSnapshotFileName"
    // static metadata: MNetworkVarNames "bool m_bActive"
    // static metadata: MNetworkVarNames "bool m_bFrozen"
    // static metadata: MNetworkVarNames "float m_flFreezeTransitionDuration"
    // static metadata: MNetworkVarNames "int m_nStopType"
    // static metadata: MNetworkVarNames "bool m_bAnimateDuringGameplayPause"
    // static metadata: MNetworkVarNames "HParticleSystemDefinitionStrong m_iEffectIndex"
    // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
    // static metadata: MNetworkVarNames "float32 m_flPreSimTime"
    // static metadata: MNetworkVarNames "Vector m_vServerControlPoints"
    // static metadata: MNetworkVarNames "uint8 m_iServerControlPointAssignments"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity > m_hControlPointEnts"
    // static metadata: MNetworkVarNames "bool m_bNoSave"
    // static metadata: MNetworkVarNames "bool m_bNoFreeze"
    // static metadata: MNetworkVarNames "bool m_bNoRamp"
    #pragma pack(push, 1)
    class CParticleSystem : public server::CBaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        char m_szSnapshotFileName[512]; // 0x788        
        // metadata: MNetworkEnable
        bool m_bActive; // 0x988        
        // metadata: MNetworkEnable
        bool m_bFrozen; // 0x989        
        [[maybe_unused]] std::uint8_t pad_0x98a[0x2]; // 0x98a
        // metadata: MNetworkEnable
        float m_flFreezeTransitionDuration; // 0x98c        
        // metadata: MNetworkEnable
        int32_t m_nStopType; // 0x990        
        // metadata: MNetworkEnable
        bool m_bAnimateDuringGameplayPause; // 0x994        
        [[maybe_unused]] std::uint8_t pad_0x995[0x3]; // 0x995
        // metadata: MNetworkEnable
        // m_iEffectIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_iEffectIndex;
        char m_iEffectIndex[0x8]; // 0x998        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartTime; // 0x9a0        
        // metadata: MNetworkEnable
        float m_flPreSimTime; // 0x9a4        
        // metadata: MNetworkEnable
        Vector m_vServerControlPoints[4]; // 0x9a8        
        // metadata: MNetworkEnable
        uint8_t m_iServerControlPointAssignments[4]; // 0x9d8        
        // metadata: MNetworkEnable
        // m_hControlPointEnts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hControlPointEnts[64];
        char m_hControlPointEnts[0x100]; // 0x9dc        
        // metadata: MNetworkEnable
        bool m_bNoSave; // 0xadc        
        // metadata: MNetworkEnable
        bool m_bNoFreeze; // 0xadd        
        // metadata: MNetworkEnable
        bool m_bNoRamp; // 0xade        
        bool m_bStartActive; // 0xadf        
        CUtlSymbolLarge m_iszEffectName; // 0xae0        
        CUtlSymbolLarge m_iszControlPointNames[64]; // 0xae8        
        int32_t m_nDataCP; // 0xce8        
        Vector m_vecDataCPValue; // 0xcec        
        int32_t m_nTintCP; // 0xcf8        
        Color m_clrTint; // 0xcfc        
        
        // Datamap fields:
        // void InputStart; // 0x0
        // void InputStop; // 0x0
        // void InputStopEndCap; // 0x0
        // void InputDestroy; // 0x0
        // CUtlSymbolLarge InputSetControlPoint; // 0x0
        // float InputSetDataControlPointX; // 0x0
        // float InputSetDataControlPointY; // 0x0
        // float InputSetDataControlPointZ; // 0x0
        // void CParticleSystemStartParticleSystemThink; // 0x0
        // CUtlString cpoint%d_value[64]; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CParticleSystem because it is not a standard-layout class
    static_assert(sizeof(CParticleSystem) == 0xd00);
};
