#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xb40
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "Vector m_ragPos"
        // static metadata: MNetworkVarNames "QAngle m_ragAngles"
        // static metadata: MNetworkVarNames "float32 m_flBlendWeight"
        // static metadata: MNetworkVarNames "EHANDLE m_hRagdollSource"
        #pragma pack(push, 1)
        class C_RagdollProp : public source2sdk::client::CBaseAnimGraph
        {
        public:
            uint8_t _pad0ac8[0x8]; // 0xac8
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            // metadata: MNetworkChangeCallback "ragAnglesChanged"
            // m_ragPos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<Vector> m_ragPos;
            char m_ragPos[0x18]; // 0xad0            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "qangle"
            // metadata: MNetworkBitCount "13"
            // metadata: MNetworkChangeCallback "ragAnglesChanged"
            // m_ragAngles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<QAngle> m_ragAngles;
            char m_ragAngles[0x18]; // 0xae8            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "1,000000"
            // metadata: MNetworkEncodeFlags "1"
            float m_flBlendWeight; // 0xb00            
            // metadata: MNetworkEnable
            // m_hRagdollSource has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hRagdollSource;
            char m_hRagdollSource[0x4]; // 0xb04            
            source2sdk::modellib::AttachmentHandle_t m_iEyeAttachment; // 0xb08            
            uint8_t _pad0b09[0x3]; // 0xb09
            float m_flBlendWeightCurrent; // 0xb0c            
            // m_parentPhysicsBoneIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_parentPhysicsBoneIndices;
            char m_parentPhysicsBoneIndices[0x18]; // 0xb10            
            // m_worldSpaceBoneComputationOrder has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<std::int32_t> m_worldSpaceBoneComputationOrder;
            char m_worldSpaceBoneComputationOrder[0x18]; // 0xb28            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_RagdollProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_RagdollProp) == 0xb40);
    };
};
