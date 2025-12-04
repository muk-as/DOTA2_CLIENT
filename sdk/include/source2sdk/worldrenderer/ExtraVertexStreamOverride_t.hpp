#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/CRenderBufferBinding.hpp"
#include "source2sdk/modellib/MeshDrawPrimitiveFlags_t.hpp"
#include "source2sdk/worldrenderer/BaseSceneObjectOverride_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace worldrenderer
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ExtraVertexStreamOverride_t : public source2sdk::worldrenderer::BaseSceneObjectOverride_t
        {
        public:
            std::uint32_t m_nSubSceneObject; // 0x_            
            std::uint32_t m_nDrawCallIndex; // 0x_            
            source2sdk::modellib::MeshDrawPrimitiveFlags_t m_nAdditionalMeshDrawPrimitiveFlags; // 0x_            
            source2sdk::modellib::CRenderBufferBinding m_extraBufferBinding; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in ExtraVertexStreamOverride_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::worldrenderer::ExtraVertexStreamOverride_t) == 0x_);
    };
};
