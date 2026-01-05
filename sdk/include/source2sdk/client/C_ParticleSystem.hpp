#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
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
        class C_ParticleSystem : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            char m_szSnapshotFileName[512]; // 0x_            
            // metadata: MNetworkEnable
            bool m_bActive; // 0x_            
            // metadata: MNetworkEnable
            bool m_bFrozen; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_flFreezeTransitionDuration; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            std::int32_t m_nStopType; // 0x_            
            // metadata: MNetworkEnable
            bool m_bAnimateDuringGameplayPause; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_iEffectIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_iEffectIndex;
            char m_iEffectIndex[0x_]; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x_            
            // metadata: MNetworkEnable
            float m_flPreSimTime; // 0x_            
            // metadata: MNetworkEnable
            Vector m_vServerControlPoints[4]; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_iServerControlPointAssignments[4]; // 0x_            
            // metadata: MNetworkEnable
            // m_hControlPointEnts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hControlPointEnts[64];
            char m_hControlPointEnts[0x_]; // 0x_            
            // metadata: MNetworkEnable
            bool m_bNoSave; // 0x_            
            // metadata: MNetworkEnable
            bool m_bNoFreeze; // 0x_            
            // metadata: MNetworkEnable
            bool m_bNoRamp; // 0x_            
            bool m_bStartActive; // 0x_            
            CUtlSymbolLarge m_iszEffectName; // 0x_            
            CUtlSymbolLarge m_iszControlPointNames[64]; // 0x_            
            std::int32_t m_nDataCP; // 0x_            
            Vector m_vecDataCPValue; // 0x_            
            std::int32_t m_nTintCP; // 0x_            
            Color m_clrTint; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNotSaved
            bool m_bOldActive; // 0x_            
            // metadata: MNotSaved
            bool m_bOldFrozen; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void InputStart; // 0x_
            // void InputStop; // 0x_
            // float InputFreeze; // 0x_
            // float InputThaw; // 0x_
            // void InputStopEndCap; // 0x_
            // void InputDestroy; // 0x_
            // CUtlSymbolLarge InputSetControlPoint; // 0x_
            // float InputSetDataControlPointX; // 0x_
            // float InputSetDataControlPointY; // 0x_
            // float InputSetDataControlPointZ; // 0x_
            // void C_ParticleSystemStartParticleSystemThink; // 0x_
            // CUtlString cpoint%d_value[64]; // 0x_
            // void m_pEffect; // 0x_
            // void m_iOldEffectIndex; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_ParticleSystem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_ParticleSystem) == 0x_);
    };
};
