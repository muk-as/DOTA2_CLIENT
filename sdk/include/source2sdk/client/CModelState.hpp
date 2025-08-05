#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x300
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "HModelStrong m_hModel"
        // static metadata: MNetworkVarNames "bool m_bClientClothCreationSuppressed"
        // static metadata: MNetworkVarNames "MeshGroupMask_t m_MeshGroupMask"
        // static metadata: MNetworkVarNames "int32 m_nBodyGroupChoices"
        // static metadata: MNetworkVarNames "int8 m_nIdealMotionType"
        #pragma pack(push, 1)
        class CModelState
        {
        public:
            uint8_t _pad0000[0xd0]; // 0x0
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "skeletonModelChanged"
            // m_hModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_hModel;
            char m_hModel[0x8]; // 0xd0            
            CUtlSymbolLarge m_ModelName; // 0xd8            
            uint8_t _pad00e0[0xc9]; // 0xe0
            // metadata: MNetworkEnable
            bool m_bClientClothCreationSuppressed; // 0x1a9            
            uint8_t _pad01aa[0xa6]; // 0x1aa
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "skeletonMeshGroupMaskChanged"
            std::uint64_t m_MeshGroupMask; // 0x250            
            uint8_t _pad0258[0x48]; // 0x258
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "bodyGroupChoiceChanged"
            // m_nBodyGroupChoices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::int32_t> m_nBodyGroupChoices;
            char m_nBodyGroupChoices[0x18]; // 0x2a0            
            uint8_t _pad02b8[0x32]; // 0x2b8
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "skeletonMotionTypeChanged"
            std::int8_t m_nIdealMotionType; // 0x2ea            
            std::int8_t m_nForceLOD; // 0x2eb            
            std::int8_t m_nClothUpdateFlags; // 0x2ec            
            uint8_t _pad02ed[0x13];
            
            // Datamap fields:
            // void m_pVPhysicsAggregate; // 0x110
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CModelState, m_hModel) == 0xd0);
        static_assert(offsetof(source2sdk::client::CModelState, m_ModelName) == 0xd8);
        static_assert(offsetof(source2sdk::client::CModelState, m_bClientClothCreationSuppressed) == 0x1a9);
        static_assert(offsetof(source2sdk::client::CModelState, m_MeshGroupMask) == 0x250);
        static_assert(offsetof(source2sdk::client::CModelState, m_nBodyGroupChoices) == 0x2a0);
        static_assert(offsetof(source2sdk::client::CModelState, m_nIdealMotionType) == 0x2ea);
        static_assert(offsetof(source2sdk::client::CModelState, m_nForceLOD) == 0x2eb);
        static_assert(offsetof(source2sdk::client::CModelState, m_nClothUpdateFlags) == 0x2ec);
        
        static_assert(sizeof(source2sdk::client::CModelState) == 0x300);
    };
};
