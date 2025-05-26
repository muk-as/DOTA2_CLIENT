#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/PhysicsRagdollPose_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmGraphDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xc78
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkIncludeByName "m_bClientSideRagdoll"
        // static metadata: MNetworkVarNames "bool m_bInitiallyPopulateInterpHistory"
        // static metadata: MNetworkVarNames "bool m_bAnimGraphUpdateEnabled"
        // static metadata: MNetworkVarNames "Vector m_vecForce"
        // static metadata: MNetworkVarNames "int32 m_nForceBone"
        // static metadata: MNetworkVarNames "PhysicsRagdollPose_t m_RagdollPose"
        // static metadata: MNetworkVarNames "bool m_bRagdollEnabled"
        // static metadata: MNetworkVarNames "bool m_bRagdollClientSide"
        // static metadata: MNetworkVarNames "HNmGraphDefinitionStrong m_hAnimGraph2DefinitionNetVar"
        // static metadata: MNetworkVarNames "uint8 m_animGraph2FlagsNetVar"
        // static metadata: MNetworkVarNames "uint8 m_animGraph2SerializeData"
        // static metadata: MNetworkVarNames "int m_nAnimGraph2SerializeDataSizeBytes"
        // static metadata: MNetworkVarNames "int m_animGraph2ReloadCountSV"
        #pragma pack(push, 1)
        class CBaseAnimGraph : public source2sdk::client::C_BaseModelEntity
        {
        public:
            uint8_t _pad0970[0x80]; // 0x970
            // metadata: MNetworkEnable
            bool m_bInitiallyPopulateInterpHistory; // 0x9f0            
            uint8_t _pad09f1[0x1]; // 0x9f1
            bool m_bSuppressAnimEventSounds; // 0x9f2            
            uint8_t _pad09f3[0xd]; // 0x9f3
            // metadata: MNetworkEnable
            bool m_bAnimGraphUpdateEnabled; // 0xa00            
            uint8_t _pad0a01[0x3]; // 0xa01
            float m_flMaxSlopeDistance; // 0xa04            
            Vector m_vLastSlopeCheckPos; // 0xa08            
            bool m_bAnimationUpdateScheduled; // 0xa14            
            uint8_t _pad0a15[0x3]; // 0xa15
            // metadata: MNetworkEnable
            Vector m_vecForce; // 0xa18            
            // metadata: MNetworkEnable
            std::int32_t m_nForceBone; // 0xa24            
            source2sdk::client::CBaseAnimGraph* m_pClientsideRagdoll; // 0xa28            
            bool m_bBuiltRagdoll; // 0xa30            
            uint8_t _pad0a31[0x17]; // 0xa31
            // metadata: MNetworkEnable
            source2sdk::client::PhysicsRagdollPose_t m_RagdollPose; // 0xa48            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientRagdollEnabledChanged"
            bool m_bRagdollEnabled; // 0xa90            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnClientRagdollChanged"
            bool m_bRagdollClientSide; // 0xa91            
            uint8_t _pad0a92[0xe]; // 0xa92
            bool m_bHasAnimatedMaterialAttributes; // 0xaa0            
            uint8_t _pad0aa1[0x137]; // 0xaa1
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "animGraph2DefinitionChanged"
            // m_hAnimGraph2DefinitionNetVar has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCNmGraphDefinition> m_hAnimGraph2DefinitionNetVar;
            char m_hAnimGraph2DefinitionNetVar[0x8]; // 0xbd8            
            // metadata: MNetworkEnable
            std::uint8_t m_animGraph2FlagsNetVar; // 0xbe0            
            uint8_t _pad0be1[0x3f]; // 0xbe1
            // metadata: MNetworkEnable
            // m_animGraph2SerializeData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::uint8_t> m_animGraph2SerializeData;
            char m_animGraph2SerializeData[0x18]; // 0xc20            
            // metadata: MNetworkEnable
            std::int32_t m_nAnimGraph2SerializeDataSizeBytes; // 0xc38            
            // metadata: MNetworkEnable
            std::int32_t m_animGraph2ReloadCountSV; // 0xc3c            
            uint8_t _pad0c40[0x38];
            
            // Datamap fields:
            // void m_pMainGraphController; // 0x9e8
            // float InputSetPlaybackRate; // 0x0
            // CUtlSymbolLarge InputSetBodyGroup; // 0x0
            // bool InputDisableAnimEventSounds; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseAnimGraph because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBaseAnimGraph) == 0xc78);
    };
};
